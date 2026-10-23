/* sub_60466328
 * address: 0x60466328   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60466328(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // r0

  v6 = ItemId_resolveGuardedByPlayerMode(a1, a3, FIELD_U32(a2, 32), FIELD_U8(a2, 13));
  return sub_604663F4(
           v6,
           *(_DWORD *)a2,
           (FIELD_U32(a2, 20) << 12) & 0x3000
         | ((FIELD_U32(a2, 24) & 1) << 14)
         | (unsigned __int16)((unsigned __int16)FIELD_U32(a2, 28) << 15)
         | (FIELD_U32(a2, 32) << 16) & 0x30000
         | (FIELD_U32(a2, 36) << 18) & 0xC0000
         | (FIELD_U32(a2, 40) << 20) & 0x300000
         | (FIELD_U32(a2, 48) << 24) & 0x1F000000
         | (FIELD_U32(a2, 56) << 30) & 0x40000000
         | (FIELD_U32(a2, 60) << 31)
         | (FIELD_U32(a2, 64) << 10) & 0x400,
           v6,
           FIELD_U8(a2, 12),
           a4);
}
