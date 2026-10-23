/* sub_600FEA54
 * address: 0x600FEA54   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FEA54(int a1)
{
  int v2; // r5
  int (__fastcall ***v3)(_DWORD, int *); // r6
  char v4; // r12
  int v5; // r5
  int v6; // r0
  float v7; // s0
  int result; // r0
  int (**v9)(); // [sp+0h] [bp-18h] BYREF
  const char *v10; // [sp+4h] [bp-14h]

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C85F74 + 8))() )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
    if ( ((unsigned int)dword_60C81768 & ~(1611655864 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
    {
      dword_60C81764 = (int)&off_60BC2CB4;
      _cxa_guard_release(dword_60C81768);
    }
    if ( v3 )
    {
      v5 = (**v3)(v3, &dword_60C81764);
      if ( v5 )
        v5 = (int)v3;
    }
    else
    {
      v5 = 0;
    }
    v6 = FIELD_U32(a1, 6304);
    if ( FIELD_U32(a1, 9436) > 3u )
    {
      v9 = &sead__SafeStringBase__vtable;
      v10 = "jc_wait";
      sub_60421AE4(v6, &v9, 1);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
      if ( v5 )
        sub_60421AD4(FIELD_U32(v5, 7100));
    }
    else
    {
      v9 = &sead__SafeStringBase__vtable;
      v10 = "jc_delight";
      sub_60421AE4(v6, &v9, 0);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 4);
      if ( v5 )
        sub_60421AD4(FIELD_U32(v5, 7100));
      sub_60813430(a1 + 9476, "SE_VOC_JR_PROV2", 0);
    }
  }
  FIELD_U32(a1, 124) = 1082130432;
  v7 = (float)(*(float *)((char *)sinLutTable + (((unsigned int)dword_60C86024 >> 20) & 0xFF0))
             + (float)((float)((float)(dword_60C86024 & 0xFFFFFF)
                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)dword_60C86024 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 16.0;
  FIELD_F32(a1, 100) = (float)((float)(v7 + 4.0) * (float)((float)(v7 + -4.0) * 0.5))
                       / (float)(FIELD_F32(a1, 6812) - FIELD_F32(a1, 112));
  FIELD_F32(a1, 136) = v7;
  FIELD_U32(a1, 120) = 0;
  result = dword_60C8601C;
  FIELD_U32(a1, 9356) = dword_60C8601C;
  return result;
}
