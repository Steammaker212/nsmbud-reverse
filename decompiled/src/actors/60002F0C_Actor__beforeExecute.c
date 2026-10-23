/* Actor__beforeExecute
 * address: 0x60002F0C   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600006C4 : StageActor
int __fastcall Actor__beforeExecute(Actor *this)
{
  bool v1; // zf

  v1 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
    v1 = FIELD_U32(dword_60C995D0, 32) == 0;
  if ( v1 )
    return 1;
  else
    return sub_603E54CC(dword_60C995D0, this);
}
