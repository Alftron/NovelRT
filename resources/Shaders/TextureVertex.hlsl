// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See License.md in the repository root for more information.
// Originally taken from the TerraFX repository. Licenced under the MIT Licence (MIT). See Licence.md in https://github.com/terrafx/terrafx for more information.

#include "TextureTypes.hlsl"

cbuffer ProjectionData : register(b0)
{
    row_major matrix projectionMatrix;
};

cbuffer ViewData : register(b1)
{
    row_major matrix viewMatrix;
};

cbuffer PrimitiveData : register(b2)
{
    row_major matrix primitiveTransform;
};

PSInput main(VSInput input)
{
    PSInput output;
    row_major matrix finalViewProjectionMatrix = mul(viewMatrix, projectionMatrix);
    finalViewProjectionMatrix = mul(finalViewProjectionMatrix, primitiveTransform);
    output.position = float4(input.position, 1.0f);
    output.position = mul(output.position, finalViewProjectionMatrix);
    output.uv = input.uv;
    return output;
}
