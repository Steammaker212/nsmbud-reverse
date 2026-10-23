/* sub_60885CB8
 * address: 0x60885CB8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60885CB8(int result)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2

  v1 = dword_60C5A978;
  dword_60C5A978 = dword_60C5A97C;
  dword_60C5A97C = dword_60C5A980;
  dword_60C5A980 = dword_60C5A984;
  dword_60C5A984 ^= v1 ^ (v1 << 11) ^ ((v1 ^ (unsigned int)(v1 << 11)) >> 8) ^ ((unsigned int)dword_60C5A984 >> 19);
  *(_WORD *)result = dword_60C5A984;
  v2 = dword_60C5A978;
  dword_60C5A978 = dword_60C5A97C;
  dword_60C5A97C = dword_60C5A980;
  dword_60C5A980 = dword_60C5A984;
  dword_60C5A984 ^= v2 ^ (v2 << 11) ^ ((v2 ^ (unsigned int)(v2 << 11)) >> 8) ^ ((unsigned int)dword_60C5A984 >> 19);
  FIELD_U16(result, 2) = dword_60C5A984;
  v3 = dword_60C5A978;
  dword_60C5A978 = dword_60C5A97C;
  dword_60C5A97C = dword_60C5A980;
  dword_60C5A980 = dword_60C5A984;
  dword_60C5A984 ^= v3 ^ (v3 << 11) ^ ((v3 ^ (unsigned int)(v3 << 11)) >> 8) ^ ((unsigned int)dword_60C5A984 >> 19);
  FIELD_U32(result, 4) = dword_60C5A984;
  return result;
}
