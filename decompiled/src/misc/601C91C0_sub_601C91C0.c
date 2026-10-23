/* sub_601C91C0
 * address: 0x601C91C0   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601C91C0(int a1)
{
  int v2; // r0
  __n64 *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v2 = FIELD_U32(a1, 1012);
  switch ( v2 )
  {
    case 2:
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      break;
    case 1:
      if ( sub_60793CA8(*(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1248) + 920) + 4)) == 1 )
      {
        (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, -1, 0.0);
        sub_601B1FA4(a1, (StateBase *)&dword_60C8A8E4);
        v6 = dword_60C89E18;
        FIELD_U8(dword_60C89E18, 254217) = 1;
        FIELD_U8(v6, 254218) = 0;
        FIELD_U32(a1, 1012) = 2;
      }
      break;
    case 0:
      if ( sub_601C7FD4(a1) == 1 )
      {
        sub_60816CB0(dword_60CC6B68);
        FIELD_U32(a1, 1120) &= ~0x8000000u;
        v3 = (__n64 *)dword_60C88BC8;
        FIELD_U8(dword_60C88BC8, 605) = 0;
        if ( !v3[75].n64_u8[4] )
        {
          sub_60173634(v3, (unsigned int *)(a1 + 1032));
          v4 = sub_601FEE28(dword_60C8C188);
          sub_6016BB6C(v4, 0, 0, 0, 0.0, 0, 0);
        }
        FIELD_U32(a1, 1012) = 1;
        v5 = (_DWORD *)sub_601FEE28(dword_60C8C188);
        sub_6016ED9C(v5);
      }
      else if ( sub_601C5024(a1) )
      {
        v7 = dword_60C88BC8;
        if ( !FIELD_U8(dword_60C88BC8, 603) )
        {
          FIELD_U8(dword_60C88BC8, 603) = 1;
          if ( !FIELD_U8(v7, 604) )
          {
            v8 = sub_601FEE28(dword_60C8C188);
            sub_6016F0B8(v8, (float *)(a1 + 140), 30);
          }
        }
      }
      FIELD_F32(a1, 996) = sqrtf(
                               (float)(FIELD_F32(a1, 124) * FIELD_F32(a1, 124))
                             + (float)(FIELD_F32(a1, 116) * FIELD_F32(a1, 116)));
      break;
  }
}
