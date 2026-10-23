/* ParaGoomba__vf294
 * address: 0x60363A3C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033B79C
// 
// Overridden by: None
int __fastcall ParaGoomba__vf294(int a1, StageActor *a2)
{
  if ( !FIELD_U8(a1, 6843) )
    sub_603FFD60(dword_60C99DD4 + 852);
  return Enemy_killSpin((Enemy *)a1, a2);
}
