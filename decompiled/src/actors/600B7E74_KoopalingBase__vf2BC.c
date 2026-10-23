/* KoopalingBase__vf2BC
 * address: 0x600B7E74   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002668C
// 
// Overridden by:
//   - 0x600A10E4 : Iggy
int __fastcall KoopalingBase__vf2BC(_BYTE *a1)
{
  a1[7764] = 1;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1088))(a1);
  return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8326C);
}
