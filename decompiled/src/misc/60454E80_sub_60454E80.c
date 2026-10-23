/* sub_60454E80
 * address: 0x60454E80   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454E80(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  _BYTE **v5; // r7
  _BYTE *v6; // r6
  int v7; // r0
  int result; // r0

  v3 = a2;
  if ( !a2 )
  {
    v3 = FIELD_U8(dword_60C9CFB8, 81);
    if ( FIELD_U8(dword_60C9CFB8, 81) )
      v3 = 4;
  }
  v4 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return 0;
  v5 = *(_BYTE ***)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v6 = *v5;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615154960 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v7 = (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C8C220);
    if ( !v6 || v7 != 1 )
      goto LABEL_13;
    if ( !v3 )
      break;
    --v3;
LABEL_13:
    if ( ++v5 == (_BYTE **)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) )
      return 0;
  }
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 20))(v6) != 1 )
    return 0;
  result = v6[5] & 6;
  if ( (v6[5] & 6) != 0 )
    return 1;
  return result;
}
