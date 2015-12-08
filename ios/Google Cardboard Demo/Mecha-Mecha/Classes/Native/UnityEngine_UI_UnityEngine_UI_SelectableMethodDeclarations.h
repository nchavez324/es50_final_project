#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Selectable
struct Selectable_t198;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t293;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t193;
// UnityEngine.UI.Graphic
struct Graphic_t225;
// UnityEngine.UI.Image
struct Image_t208;
// UnityEngine.Animator
struct Animator_t365;
// UnityEngine.RectTransform
struct RectTransform_t209;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t170;
// UnityEngine.Sprite
struct Sprite_t205;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t109;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t62;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" void Selectable__ctor_m1614 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
extern "C" void Selectable__cctor_m1615 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
extern "C" List_1_t293 * Selectable_get_allSelectables_m1616 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
extern "C" Navigation_t272  Selectable_get_navigation_m1617 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
extern "C" void Selectable_set_navigation_m1618 (Selectable_t198 * __this, Navigation_t272  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
extern "C" int32_t Selectable_get_transition_m1619 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
extern "C" void Selectable_set_transition_m1620 (Selectable_t198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C" ColorBlock_t203  Selectable_get_colors_m1621 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C" void Selectable_set_colors_m1622 (Selectable_t198 * __this, ColorBlock_t203  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
extern "C" SpriteState_t291  Selectable_get_spriteState_m1623 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
extern "C" void Selectable_set_spriteState_m1624 (Selectable_t198 * __this, SpriteState_t291  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
extern "C" AnimationTriggers_t193 * Selectable_get_animationTriggers_m1625 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
extern "C" void Selectable_set_animationTriggers_m1626 (Selectable_t198 * __this, AnimationTriggers_t193 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
extern "C" Graphic_t225 * Selectable_get_targetGraphic_m1627 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
extern "C" void Selectable_set_targetGraphic_m1628 (Selectable_t198 * __this, Graphic_t225 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
extern "C" bool Selectable_get_interactable_m1629 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C" void Selectable_set_interactable_m1630 (Selectable_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
extern "C" bool Selectable_get_isPointerInside_m1631 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
extern "C" void Selectable_set_isPointerInside_m1632 (Selectable_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
extern "C" bool Selectable_get_isPointerDown_m1633 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
extern "C" void Selectable_set_isPointerDown_m1634 (Selectable_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
extern "C" bool Selectable_get_hasSelection_m1635 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
extern "C" void Selectable_set_hasSelection_m1636 (Selectable_t198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
extern "C" Image_t208 * Selectable_get_image_m1637 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
extern "C" void Selectable_set_image_m1638 (Selectable_t198 * __this, Image_t208 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
extern "C" Animator_t365 * Selectable_get_animator_m1639 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
extern "C" void Selectable_Awake_m1640 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
extern "C" void Selectable_OnCanvasGroupChanged_m1641 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
extern "C" bool Selectable_IsInteractable_m1642 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" void Selectable_OnDidApplyAnimationProperties_m1643 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" void Selectable_OnEnable_m1644 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
extern "C" void Selectable_OnSetProperty_m1645 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" void Selectable_OnDisable_m1646 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
extern "C" int32_t Selectable_get_currentSelectionState_m1647 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
extern "C" void Selectable_InstantClearState_m1648 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void Selectable_DoStateTransition_m1649 (Selectable_t198 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
extern "C" Selectable_t198 * Selectable_FindSelectable_m1650 (Selectable_t198 * __this, Vector3_t5  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
extern "C" Vector3_t5  Selectable_GetPointOnRectEdge_m1651 (Object_t * __this /* static, unused */, RectTransform_t209 * ___rect, Vector2_t21  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
extern "C" void Selectable_Navigate_m1652 (Selectable_t198 * __this, AxisEventData_t170 * ___eventData, Selectable_t198 * ___sel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
extern "C" Selectable_t198 * Selectable_FindSelectableOnLeft_m1653 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
extern "C" Selectable_t198 * Selectable_FindSelectableOnRight_m1654 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
extern "C" Selectable_t198 * Selectable_FindSelectableOnUp_m1655 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
extern "C" Selectable_t198 * Selectable_FindSelectableOnDown_m1656 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Selectable_OnMove_m1657 (Selectable_t198 * __this, AxisEventData_t170 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
extern "C" void Selectable_StartColorTween_m1658 (Selectable_t198 * __this, Color_t17  ___targetColor, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
extern "C" void Selectable_DoSpriteSwap_m1659 (Selectable_t198 * __this, Sprite_t205 * ___newSprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
extern "C" void Selectable_TriggerAnimation_m1660 (Selectable_t198 * __this, String_t* ___triggername, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsHighlighted_m1661 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsPressed_m1662 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
extern "C" bool Selectable_IsPressed_m1663 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_UpdateSelectionState_m1664 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_EvaluateAndTransitionToSelectionState_m1665 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
extern "C" void Selectable_InternalEvaluateAndTransitionToSelectionState_m1666 (Selectable_t198 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerDown_m1667 (Selectable_t198 * __this, PointerEventData_t62 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerUp_m1668 (Selectable_t198 * __this, PointerEventData_t62 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerEnter_m1669 (Selectable_t198 * __this, PointerEventData_t62 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerExit_m1670 (Selectable_t198 * __this, PointerEventData_t62 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnSelect_m1671 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnDeselect_m1672 (Selectable_t198 * __this, BaseEventData_t109 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
extern "C" void Selectable_Select_m1673 (Selectable_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
