/* sub_60748124
 * address: 0x60748124   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60748124(int a1)
{
  int v2; // r6
  int *v3; // r1
  int *v4; // r1

  if ( Actor__getProfileId((Actor *)a1) != 842 )
    return sub_60748EF4(a1);
  v2 = dword_60CD0B40;
  sub_60443298((int)DrawMgr_instance);
  v3 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_604431BC(DrawMgr_instance, *v3, 0);
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 728));
  sub_60443298((int)DrawMgr_instance);
  v4 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v4 += 9;
  sub_604431BC(DrawMgr_instance, *v4, 0);
  return 1;
}
