/* MovementBlockCoinBase__spawnItemUp
 * address: 0x605D0A80   size: 32   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605B1C90
// 
// Overridden by:
//   - 0x60564BA8 : BlockBase
int __fastcall MovementBlockCoinBase__spawnItemUp(_DWORD *a1)
{
  a1[1699] = 0;
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB111C);
}
