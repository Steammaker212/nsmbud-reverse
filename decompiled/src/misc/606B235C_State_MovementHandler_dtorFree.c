/* State_MovementHandler_dtorFree
 * address: 0x606B235C   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
void __fastcall State_MovementHandler_dtorFree(void *a1)
{
  operator_delete(a1);
}
