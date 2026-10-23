/* sub_601373B0
 * address: 0x601373B0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601373B0(int result, _DWORD *a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r5
  int v6; // r8

  v3 = result;
  v4 = a2[16];
  v5 = FIELD_U8(v4, 533);
  if ( v5 != 3 )
  {
    v6 = FIELD_U32(result, 64);
    result = sub_602A25C0(result);
    if ( !result )
    {
      switch ( v5 )
      {
        case 0:
          if ( Actor__getProfileId((Actor *)v4) == 474 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 240))(v6);
            sub_601362A0(v6);
            FIELD_U8(v3, 110) |= 2u;
          }
          result = Actor__getProfileId((Actor *)v4);
          if ( result == 478 )
            goto LABEL_16;
          return result;
        case 1:
          goto LABEL_10;
        case 2:
          result = FIELD_S8(v4, 84);
          if ( result < 0 )
            return result;
          result = a2[35];
          if ( result == 15 )
            return result;
LABEL_10:
          if ( sub_6075EDF8(v4) != 1 || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1204))(v4), result == 1) )
          {
            result = a2[34];
            if ( result != 15 )
            {
              (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v4 + 1164))(v4, v3, a2);
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1204))(v4) == 1 )
LABEL_16:
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 240))(v6);
              sub_601362A0(v6);
              result = FIELD_U8(v3, 110) | 2;
              FIELD_U8(v3, 110) = result;
            }
          }
          break;
        case 4:
          result = a2[35];
          if ( result == 3 )
            goto LABEL_16;
          return result;
        default:
          return result;
      }
    }
  }
  return result;
}
