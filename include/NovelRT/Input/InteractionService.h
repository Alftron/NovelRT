// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef NOVELRT_INPUT_INTERACTIONSERVICE_H
#define NOVELRT_INPUT_INTERACTIONSERVICE_H

namespace NovelRT::Input {
  class InteractionService {
    friend class InteractionObject;

    NOVELRT_PARAMETERLESS_EVENT(Quit)

  private:
    void HandleInteractionDraw(InteractionObject* target);
    InteractionObject* _clickTarget;
    std::map<KeyCode, KeyState> _keyStates;
    std::map<KeyCode, GeoVector<float>> _mousePositionsOnScreenPerButton;
    LayeringService* const _layeringService;
    GeoVector<float> _screenSize;

  public:
    InteractionService(LayeringService* const layeringService);

    void consumePlayerInput();

    BasicInteractionRect* getBasicInteractionRect(const Maths::GeoVector<float>& startingSize, const Utilities::CommonArgs& args);

    void ExecuteClickedInteractable();

    inline void setScreenSize(const Maths::GeoVector<float>& value) {
      _screenSize = value;
    }
  };
}

#endif //NOVELRT_INPUT_INTERACTIONSERVICE_H
