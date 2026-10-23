/* sub_603E5704
 * address: 0x603E5704   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E5704(int a1)
{
  unsigned int v2; // r1
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r1

  v2 = 0;
  v3 = 0;
  v4 = FIELD_U32(a1, 24);
  if ( v4 < 4 )
    v2 = v4;
  v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
  if ( !v5 )
    goto LABEL_6;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 644))(v5) )
  {
    v4 = FIELD_U32(a1, 24);
LABEL_6:
    sub_6002426C(v4);
    return 1;
  }
  return v3;
}
