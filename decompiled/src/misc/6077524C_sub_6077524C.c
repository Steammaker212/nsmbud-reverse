/* sub_6077524C
 * address: 0x6077524C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077524C(int a1, int a2)
{
  int v4; // r4
  bool v5; // zf
  float v7; // s16

  v4 = 0;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
  {
    v5 = (FIELD_U8(a1, 1235) & 0x20) == 0;
    if ( (FIELD_U8(a1, 1235) & 0x20) == 0 )
      v5 = (FIELD_U8(a1, 1213) & 0x20) == 0;
    if ( v5 )
    {
      v7 = FIELD_F32(a2, 112);
      if ( (float)((float)(v7 + (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1)) + 6.0) >= FIELD_F32(a1, 112)
        && FIELD_F32(a1, 124) < 0.0
        && !FIELD_U32(a1, 9952) )
      {
        v4 = 1;
        FIELD_U32(a1, 9952) = FIELD_U32(a2, 8);
        if ( (FIELD_U8(a1, 1204) & 0x10) == 0 )
        {
          sub_6040A1D8(dword_60C9A1F0);
          FIELD_U8(a1, 1296) = 0;
          FIELD_U8(a1, 1314) = 0;
          FIELD_U32(a1, 9940) = 0;
          FIELD_U32(a1, 9944) = 0;
          FIELD_U32(a1, 9948) = 0;
          FIELD_U32(a1, 1228) &= 0xFFFFD3FF;
          FIELD_U32(a1, 1208) &= ~8u;
          FIELD_U32(a1, 1204) &= ~0x400u;
          FIELD_U32(a1, 9932) = 0;
          FIELD_U32(a1, 9936) = 0;
          StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF984);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
        }
      }
    }
  }
  return v4;
}
