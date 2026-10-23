/* sub_60802694
 * address: 0x60802694   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60802694()
{
  int v0; // r1
  int v1; // r0
  bool v2; // zf
  int v3; // r3
  bool v4; // zf
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  bool v8; // zf

  v0 = 0;
  if ( PlayerMgr_instance )
  {
    v1 = sub_6078A76C((_DWORD *)PlayerMgr_instance);
    v2 = (v1 & 1) == 0;
    v0 = (int)&PlayerMgr_instance;
    if ( (v1 & 1) != 0 )
    {
      v0 = FIELD_U32(PlayerMgr_instance, 32);
      v2 = v0 == 0;
    }
    if ( v2 || (v3 = FIELD_U32(v0, 11484), v0 = 1, v3 != 6) )
    {
      v4 = (v1 & 2) == 0;
      if ( (v1 & 2) != 0 )
      {
        v0 = FIELD_U32(PlayerMgr_instance, 36);
        v4 = v0 == 0;
      }
      if ( v4 || (v5 = FIELD_U32(v0, 11484), v0 = 1, v5 != 6) )
      {
        v6 = (v1 & 4) == 0;
        if ( (v1 & 4) != 0 )
        {
          v0 = FIELD_U32(PlayerMgr_instance, 40);
          v6 = v0 == 0;
        }
        if ( v6 || (v7 = FIELD_U32(v0, 11484), v0 = 1, v7 != 6) )
        {
          v8 = (v1 & 8) == 0;
          if ( (v1 & 8) != 0 )
          {
            v1 = FIELD_U32(PlayerMgr_instance, 44);
            v8 = v1 == 0;
          }
          if ( v8 )
            return 0;
          return FIELD_U32(v1, 11484) == 6;
        }
      }
    }
  }
  return v0;
}
