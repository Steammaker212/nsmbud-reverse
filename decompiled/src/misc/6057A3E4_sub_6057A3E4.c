/* sub_6057A3E4
 * address: 0x6057A3E4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6057A3E4(int a1)
{
  if ( FIELD_U8(a1, 7401) )
    return sub_605D01D4() != 0;
  if ( FIELD_U32(a1, 7380) || FIELD_F32(a1, 124) <= 0.0 )
  {
    FIELD_U8(a1, 7401) = 1;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  }
  return 0;
}
