/* sub_6013E1A0
 * address: 0x6013E1A0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013E1A0(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5
  float *v6; // r6
  float *v7; // r7
  float v8; // s16
  float v9; // s18

  v5 = FIELD_U32(a3, 64);
  v6 = *(float **)(a2 + 64);
  if ( ((unsigned int)dword_60C87BD0 & ~(1611915716 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C87BD0) )
  {
    dword_60C87BCC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87BD0);
  }
  v7 = (float *)(**(int (__fastcall ***)(float *, int *))v6)(v6, &dword_60C87BCC);
  v8 = FIELD_F32(v5, 108);
  if ( v7 )
    v7 = v6;
  v9 = v7[27];
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)v7 + 632))(v7, v5);
  SE_OBJ_ROCK_LAND_ref(v7, v9 < v8);
  FIELD_U8(a2, 110) |= 2u;
  return 1;
}
