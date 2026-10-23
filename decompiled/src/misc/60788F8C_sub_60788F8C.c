/* sub_60788F8C
 * address: 0x60788F8C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60788F8C(int a1, int a2)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r2

  v2 = FIELD_U32(PlayerMgr_instance, 32);
  if ( !v2 || (v3 = FIELD_U32(v2, 1316), result = 0, v3 != a2) )
  {
    v5 = FIELD_U32(PlayerMgr_instance, 36);
    if ( !v5 || (v6 = FIELD_U32(v5, 1316), result = 1, v6 != a2) )
    {
      v7 = FIELD_U32(PlayerMgr_instance, 40);
      if ( !v7 || (v8 = FIELD_U32(v7, 1316), result = 2, v8 != a2) )
      {
        v9 = FIELD_U32(PlayerMgr_instance, 44);
        if ( v9 )
        {
          v10 = FIELD_U32(v9, 1316);
          result = 3;
          if ( v10 != a2 )
            return -1;
        }
        else
        {
          return -1;
        }
      }
    }
  }
  return result;
}
