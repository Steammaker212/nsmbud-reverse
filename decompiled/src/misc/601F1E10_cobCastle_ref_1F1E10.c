/* cobCastle_ref_1F1E10
 * address: 0x601F1E10   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobCastle_ref_1F1E10(int a1)
{
  int ProfileId; // r0
  int v3; // r2
  float v4; // r0
  float v5; // r1
  int v6; // r0
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  ProfileId = Actor__getProfileId((Actor *)a1);
  v3 = 0;
  if ( ProfileId != 871 )
  {
    v3 = 1;
    if ( ProfileId != 872 )
    {
      v3 = 2;
      if ( ProfileId != 873 )
      {
        v3 = 3;
        if ( ProfileId != 874 )
        {
          v3 = 4;
          if ( ProfileId != 875 )
          {
            v3 = 5;
            if ( ProfileId != 876 )
            {
              v3 = 7;
              if ( ProfileId == 877 )
                v3 = 6;
            }
          }
        }
      }
    }
  }
  FIELD_U32(a1, 240) = v3;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "cobCastle";
  sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 604), v3, 0, (int)v8);
  FIELD_U32(a1, 568) = FIELD_U32(a1, 604);
  v4 = FIELD_F32(a1, 608);
  FIELD_F32(a1, 572) = v4;
  v5 = FIELD_F32(a1, 612);
  FIELD_F32(a1, 576) = v5;
  FIELD_F32(a1, 612) = v5 - FIELD_F32(a1, 632);
  FIELD_F32(a1, 608) = v4 + FIELD_F32(a1, 628);
  v6 = sub_608332B0(a1 + 80, a1 + 604);
  FIELD_U32(a1, 616) = v6;
  FIELD_U32(a1, 192) = v6;
  FIELD_U32(a1, 700) = 0x1000000;
  FIELD_U32(a1, 704) = 0x100000;
  FIELD_U32(a1, 596) = 0;
  return 0x1000000;
}
