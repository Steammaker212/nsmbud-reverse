/* sub_606E0798
 * address: 0x606E0798   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E0798(int a1)
{
  if ( FIELD_U32(a1, 6932) )
  {
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = -1065353216;
    FIELD_U32(a1, 140) = 0;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B090BC, 0, 0);
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
}
