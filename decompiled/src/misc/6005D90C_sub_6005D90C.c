/* sub_6005D90C
 * address: 0x6005D90C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005D90C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r5
  float32x2_t v10; // d0
  float32x2_t v11; // d2
  int *v12; // r0
  _DWORD v14[2]; // [sp+0h] [bp-40h] BYREF
  int (**v15)(); // [sp+8h] [bp-38h]
  const char *v16; // [sp+Ch] [bp-34h]

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v4 = (*(int (**)(void))(dword_60C80E90 + 8))();
  v5 = 1;
  if ( v3 != v4 )
  {
    v6 = FIELD_U32(a1, 7204);
    v15 = &sead__SafeStringBase__vtable;
    v16 = "fly_wait";
    sub_60421AD4(v6);
    v14[0] = &sead__SafeStringBase__vtable;
    v14[1] = "fly_wait";
    sub_60051794(a1, (int)v14, 1);
    v7 = FIELD_U32(a1, 7836);
    v15 = &sead__SafeStringBase__vtable;
    v16 = "fly_wing_wait";
    sub_60421AD4(v7);
    FIELD_U32(a1, 7920) = 0;
    v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v8 == (*(int (**)(void))(dword_60C80DD0 + 8))()
      || (v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2), v9 == (*(int (**)(void))(dword_60C80E50 + 8))()) )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
        || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
      {
        v12 = &dword_60C80F34;
      }
      else
      {
        v12 = &dword_60C80F38;
      }
      v11.n64_u32[0] = 1108344832;
      v10.n64_f32[0] = FIELD_F32(a1, 124)
                     / (float)(*(float *)((char *)sinLutTable + (((unsigned int)*v12 >> 20) & 0xFF0))
                             + (float)((float)((float)(*v12 & 0xFFFFFF)
                                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)*v12 >> 20) & 0xFF0)))
                                     * 0.000000059605));
      FIELD_U32(a1, 7916) = vmin_f32(v10, v11).n64_u32[0];
    }
    else
    {
      FIELD_U32(a1, 7916) = 1094713344;
    }
    v5 = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 6276) = 1310840;
  }
  FIELD_U32(a1, 7848) = v5;
  return 7848;
}
