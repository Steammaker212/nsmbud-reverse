/* sub_6079FEC4
 * address: 0x6079FEC4   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079FEC4(int a1, _DWORD *a2)
{
  char v2; // r12
  int v3; // r5
  int v5; // r4
  int v6; // r7
  int v7; // r0
  bool v8; // zf
  int v9; // r2

  v3 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618607840 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v5 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
    {
      v6 = a2[16];
      if ( v6 )
      {
        if ( a2[34] > 1u )
        {
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1156))(v3) )
            return v5;
        }
        else
        {
          if ( FIELD_U32(v3, 9580) )
            return v5;
          v7 = sub_60766708(v3);
          v8 = v7 == 0;
          if ( !v7 )
            v8 = (FIELD_U8(v3, 1234) & 0x10) == 0;
          if ( !v8
            || FIELD_U8(v6, 533) == 1
            && (FIELD_U32(v6, 9580) || sub_60760004(v3, v6) || sub_607781EC(dword_60CBFA90)) )
          {
            return v5;
          }
        }
        v9 = a2[35];
        switch ( v9 )
        {
          case 1:
          case 2:
            v5 = 1;
            if ( FIELD_U8(v3, 84) == FIELD_U8(v6, 84) || (FIELD_U8(v3, 1223) & 1) != 0 )
              return v5;
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 1364))(v3, a2[35]);
            return 1;
          case 7:
          case 13:
          case 17:
            (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 1372))(v3, v6, v9);
            goto LABEL_30;
          case 8:
            (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1172))(v3, a2[16], 6);
            goto LABEL_30;
          case 11:
            v5 = 1;
            if ( FIELD_U8(v6, 533) != 1 || sub_6079D270(v6, v3) )
              return v5;
            sub_6079D270(v3, v6);
            return 1;
          case 19:
          case 20:
          case 21:
            if ( FIELD_U8(v3, 84) == FIELD_U8(v6, 84) || (FIELD_U8(v3, 1223) & 1) != 0 )
              goto LABEL_30;
            if ( (FIELD_U8(v3, 1219) & 4) != 0 )
            {
              FIELD_F32(v3, 88) = flt_60B0A898[*(_DWORD *)(a2[16] + 80)];
              FIELD_U32(v3, 9580) = 0;
            }
            else
            {
              FIELD_U32(v3, 9580) = 30;
              if ( (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1172))(v3, a2[16], 7) != 1 )
                return v5;
            }
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 1364))(v3, a2[35]);
LABEL_30:
            v5 = 1;
            break;
          default:
            return v5;
        }
      }
    }
  }
  return v5;
}
