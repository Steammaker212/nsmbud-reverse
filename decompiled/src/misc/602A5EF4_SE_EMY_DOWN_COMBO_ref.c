/* SE_EMY_DOWN_COMBO_ref
 * address: 0x602A5EF4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_COMBO_ref(float *a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r6
  int *v6; // r0

  if ( ((unsigned int)dword_60C907FC & ~(1613389592 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C907FC) )
  {
    dword_60C9083C = (int)"SE_EMY_DOWN_COMBO_1";
    dword_60C90840 = (int)"SE_EMY_DOWN_COMBO_2";
    dword_60C90844 = (int)"SE_EMY_DOWN_COMBO_3";
    dword_60C90848 = (int)"SE_EMY_DOWN_COMBO_4";
    dword_60C9084C = (int)"SE_EMY_DOWN_COMBO_5";
    dword_60C90850 = (int)"SE_EMY_DOWN_COMBO_6";
    dword_60C90854 = (int)"SE_EMY_DOWN_COMBO_7";
    dword_60C90858 = (int)"SE_EMY_DOWN_COMBO_7";
    dword_60C9085C = (int)"SE_EMY_DOWN_COMBO_7";
    _cxa_guard_release(dword_60C907FC);
  }
  v5 = FIELD_S8(a2, 1314);
  v6 = sub_60002B90(FIELD_S8(a2, 84), unk_60C26464);
  return sub_602A358C(a1, v5, (int)&dword_60C9083C, 9u, (int)v6);
}
