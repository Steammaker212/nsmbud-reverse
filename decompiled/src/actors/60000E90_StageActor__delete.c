/* StageActor__delete
 * address: 0x60000E90   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall StageActor__delete(StateActor *this, int unk)
{
  _BYTE *_278ptr; // r0

  FIELD_U32(this, 0x0)._._.isDeleted = 1;
  _278ptr = (_BYTE *)FIELD_U32(this, 0x0)._.field_278;
  if ( _278ptr )
  {
    if ( (unk ^ 1) == 1 )
      *_278ptr &= ~1u;
  }
  return _278ptr;
}
