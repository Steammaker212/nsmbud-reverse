/* sub_60149250
 * address: 0x60149250   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60149250(int a1)
{
  int *v1; // r2

  FIELD_U32(a1, 116) = 1161936896;
  FIELD_U32(a1, 11844) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11848) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11852) = 1161936896;
  v1 = dword_60149308;
  if ( FIELD_U32(a1, 11868) )
    v1 = &dword_60149308[1];
  FIELD_U32(a1, 120) = *v1;
  FIELD_U32(a1, 124) = 1056964608;
  FIELD_U32(a1, 128) = 0x40000000;
  FIELD_U8(a1, 11865) = 0;
  FIELD_U32(a1, 11856) = FIELD_U32(dword_60CC6484, 124);
  CollisionMgr_init((CollisionMgr *)(a1 + 6480), (StateActor *)a1, &stru_60AF6B04, &stru_60AF6B10, &stru_60AF6B1C);
}
