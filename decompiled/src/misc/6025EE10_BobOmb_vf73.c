/* BobOmb_vf73
 * address: 0x6025EE10   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf73(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r5
  signed int result; // r0
  int v7; // r1
  void (__fastcall *v8)(int, _DWORD *); // r2
  __int16 v9; // r2
  int v10; // r6
  _DWORD v11[9]; // [sp+4h] [bp-24h] BYREF

  v3 = FIELD_U32(a3, 64);
  v5 = FIELD_S8(v3, 84);
  if ( (unsigned __int8)v5 > 3u || (result = 0, !*(_WORD *)(a1 + 2 * v5 + 6140)) )
  {
    FIELD_U32(a1, 80) = FIELD_F32(a1, 108) < FIELD_F32(v3, 108);
    FIELD_U8(a1, 84) = v5;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    v7 = FIELD_U32(v3, 112);
    v8 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 416);
    v11[0] = FIELD_U32(v3, 108);
    v11[1] = v7;
    v11[2] = 1166843904;
    v8(a1, v11);
    if ( (unsigned __int8)v5 <= 3u )
      *(_WORD *)(a1 + 2 * v5 + 6140) = 16;
    if ( FIELD_S32(a1, 6456) <= 0 )
    {
      v9 = FIELD_U16(a1, 6364);
      if ( (v9 & 4) == 0 )
      {
        FIELD_U16(a1, 6364) = v9 | 4;
        FIELD_U32(a1, 6456) = 240;
        v10 = **(_DWORD **)(FIELD_U32(a1, 6352) + 0x1C);
        sub_6041838C((ModelAnimation *)(v10 + 4));
        AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), 0);
        FIELD_U32(v10, 20) = 0;
        FIELD_U32(v10, 28) |= 2u;
        FIELD_U32(v10, 24) = 0x3F800000;
      }
    }
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BobOmb_StateID_Kicked);
    return 1;
  }
  return result;
}
