/* MovementHandler_findMovementController_helper_6B12C4
 * address: 0x606B12C4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall MovementHandler_findMovementController_helper_6B12C4(int a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r6
  float v6; // s8
  float *v7; // r0
  float v8; // s6
  float v9; // s10
  float v10; // s12
  int v11; // r0
  float v12[2]; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+Ch] [bp-14h]

  if ( ((unsigned int)&dword_60CB2D18 & ~(1617629924 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2D18) )
  {
    dword_60CB2D14 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB2D18);
  }
  if ( a2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60CB2D14) == 1 )
    {
      FIELD_F32(a1, 112) = FIELD_F32(a2, 1060) + FIELD_F32(a1, 208);
      v5 = FIELD_U32(a1, 116);
      sub_6060A388(a2, (int)v12);
      v6 = FIELD_F32(a1, 112);
      v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
      v8 = (float)(v5 & 0xFFFFFF);
      v9 = v12[0] + (float)(v6 * (float)(v7[2] + (float)((float)(v8 * v7[3]) * 0.000000059605)));
      *(float *)a1 = v9;
      v10 = v12[1] + (float)(v6 * (float)(*v7 + (float)((float)(v8 * v7[1]) * 0.000000059605)));
      FIELD_F32(a1, 4) = v10;
      v11 = v13;
      FIELD_U32(a1, 8) = v13;
      FIELD_U32(a1, 204) = v11;
      FIELD_F32(a1, 196) = v9;
      FIELD_F32(a1, 200) = v10;
    }
  }
}
