/* CollisionMgr_process_helper_14DDD0
 * address: 0x6014DDD0   size: 272   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_process_helper_14DDD0(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r6
  int *v5; // r1
  int v6; // t1
  int v7; // r3
  int v8; // r2
  int v9; // r1
  bool v10; // zf
  bool v11; // zf

  result = FIELD_U32(a1, 2224);
  if ( (result & 0x10400) == 0x400 )
  {
    v3 = FIELD_U32(a1, 2568);
    if ( v3 <= 5 )
    {
      v4 = a1 + 56 * v3;
      v6 = FIELD_U32(v4, 3304);
      v5 = (int *)(v4 + 3304);
      v7 = FIELD_U32(v4, 3308);
      FIELD_U32(a1, 5296) = v6;
      FIELD_U32(a1, 5300) = v7;
      if ( (v6 & 0xFFFFFF) == 0x4000D )
      {
        result |= 0x10000u;
        FIELD_U32(a1, 2224) = result;
      }
      v8 = *v5;
      if ( (*v5 & 0xFFFFFF) == 0x6000F )
      {
        v9 = FIELD_U32(v4, 3308);
        FIELD_U32(a1, 5328) = v8;
        FIELD_U32(a1, 5332) = v9;
      }
      if ( FIELD_U8(v4, 3267) )
      {
        result &= 0x10400u;
        if ( result == 1024 )
        {
          result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v4, 3292));
          v10 = result == 0;
          if ( result )
          {
            result = FIELD_U32(v4, 3296);
            v10 = result == 0;
          }
          if ( !v10 )
          {
            v11 = FIELD_U8(v4, 3266) == 0;
            if ( FIELD_U8(v4, 3266) )
              v11 = (FIELD_U8(a1, 2546) & 0x20) == 0;
            if ( !v11 && !*(_BYTE *)(FIELD_U32(a1, 2196) + 19) )
              sub_60160288();
            result = FIELD_U32(a1, 2224) | 0x2000;
            FIELD_U32(a1, 2224) = result;
          }
        }
      }
    }
  }
  return result;
}
