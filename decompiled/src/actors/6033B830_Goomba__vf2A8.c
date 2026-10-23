/* Goomba__vf2A8
 * address: 0x6033B830   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5D8
// 
// Overridden by: None
bool __fastcall Goomba__vf2A8(int a1)
{
  int v1; // r4

  v1 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  return v1 == (*(int (**)(void))(dword_60C942B8 + 8))();
}
