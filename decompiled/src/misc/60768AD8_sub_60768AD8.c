/* sub_60768AD8
 * address: 0x60768AD8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMgr *__fastcall sub_60768AD8(StateMgr *a1)
{
  if ( (BYTE2(a1[77].executer) & 0x10) != 0 )
    return (StateMgr *)sub_60767080(a1);
  return a1;
}
