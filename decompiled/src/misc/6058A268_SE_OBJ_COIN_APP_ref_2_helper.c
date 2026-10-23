/* SE_OBJ_COIN_APP_ref_2_helper
 * address: 0x6058A268   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_APP_ref_2_helper(float *a1)
{
  int v1; // r5
  float *v2; // r4
  float v3; // s18
  float v4; // s20
  float v5; // s16
  float v6; // s22
  unsigned int v7; // r1
  int v8; // r0
  bool v9; // zf

  v1 = 0;
  v2 = a1 + 1881;
  v3 = a1[1560];
  v4 = a1[1559];
  v5 = a1[1561];
  v6 = a1[1558];
  do
  {
    v7 = *((_DWORD *)v2 - 1);
    if ( v7 )
    {
      if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, v7) )
      {
        v8 = *(_DWORD *)v2;
        if ( *(_BYTE *)(*(_DWORD *)v2 + 2340) )
        {
          v9 = (FIELD_U8(v8, 2528) & 0x10) == 0;
          if ( (FIELD_U8(v8, 2528) & 0x10) == 0 )
            v9 = (FIELD_U8(v8, 2536) & 0x10) == 0;
          if ( (!v9 || (FIELD_U8(v8, 2544) & 0x10) != 0 || (FIELD_U8(v8, 2552) & 0x10) != 0)
            && (float)(FIELD_F32(v8, 2272) + 6.0) <= v3
            && v6 <= (float)(FIELD_F32(v8, 2280) + -6.0)
            && v4 <= (float)(FIELD_F32(v8, 2284) + -6.0)
            && (float)(FIELD_F32(v8, 2276) + 6.0) <= v5 )
          {
            return 1;
          }
        }
      }
    }
    ++v1;
    v2 += 2;
  }
  while ( v1 < 16 );
  return 0;
}
