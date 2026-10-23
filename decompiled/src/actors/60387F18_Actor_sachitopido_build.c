/* Actor_sachitopido_build
 * address: 0x60387F18   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sachitopido_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x2068u);
  sub_603BECA4(v2, a1);
  *(_DWORD *)v2 = off_60BF3A08;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6912));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7216));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7520));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7824));
  FIELD_U32(v2, 8128) = -1;
  FIELD_U32(v2, 8292) = 0;
  memset((void *)(v2 + 8132), 0, 97);
  memset(v2 + 8232, 0, 58);
  return v2;
}
