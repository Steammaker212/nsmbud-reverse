/* ParaGoomba__vf298
 * address: 0x60363A80   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033B7A0
// 
// Overridden by: None
int __fastcall ParaGoomba__vf298(int a1, int a2)
{
  int v3; // r0
  int result; // r0

  v3 = FIELD_U32(a1, 6376);
  if ( v3 )
    ++FIELD_U32(v3, 6960);
  Enemy_killYoshi(a1, a2);
  result = FIELD_U8(a1, 6843);
  if ( !FIELD_U8(a1, 6843) )
    return sub_603FFD60(dword_60C99DD4 + 852);
  return result;
}
