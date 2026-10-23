/* sub_603E4AD8
 * address: 0x603E4AD8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E4AD8(int result)
{
  unsigned int v1; // r1
  int v2; // r1
  bool v3; // zf

  v1 = FIELD_U32(result, 24);
  if ( v1 >= 4 )
    v1 = 0;
  v2 = *(_DWORD *)(PlayerMgr_instance + 4 * v1 + 32);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(v2, 12012) == 0;
  if ( v3 )
    FIELD_U8(result, 29) = 1;
  else
    FIELD_U8(result, 30) = 1;
  return result;
}
