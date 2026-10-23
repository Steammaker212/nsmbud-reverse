/* sub_6080259C
 * address: 0x6080259C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6080259C()
{
  int v0; // r1
  int v1; // r0
  bool v2; // zf
  bool v3; // zf
  bool v4; // zf
  bool v5; // zf
  int v7; // r3
  int v8; // r3
  int v9; // r3

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
    if ( v2 || (v7 = FIELD_U32(v0, 11484) | 4, v0 = 1, v7 != 6) )
    {
      v3 = (v1 & 2) == 0;
      if ( (v1 & 2) != 0 )
      {
        v0 = FIELD_U32(PlayerMgr_instance, 36);
        v3 = v0 == 0;
      }
      if ( v3 || (v8 = FIELD_U32(v0, 11484) | 4, v0 = 1, v8 != 6) )
      {
        v4 = (v1 & 4) == 0;
        if ( (v1 & 4) != 0 )
        {
          v0 = FIELD_U32(PlayerMgr_instance, 40);
          v4 = v0 == 0;
        }
        if ( v4 || (v9 = FIELD_U32(v0, 11484) | 4, v0 = 1, v9 != 6) )
        {
          v5 = (v1 & 8) == 0;
          if ( (v1 & 8) != 0 )
          {
            v1 = FIELD_U32(PlayerMgr_instance, 44);
            v5 = v1 == 0;
          }
          if ( v5 )
            return 0;
          return (FIELD_U32(v1, 11484) | 4) == 6;
        }
      }
    }
  }
  return v0;
}
