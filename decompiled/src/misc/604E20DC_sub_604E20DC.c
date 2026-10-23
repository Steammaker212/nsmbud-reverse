/* sub_604E20DC
 * address: 0x604E20DC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E20DC(int a1)
{
  int v1; // r1

  FIELD_U32(a1, 5712) = 32;
  FIELD_U32(a1, 5736) = -1;
  v1 = 0;
  FIELD_U8(a1, 5746) = 0;
  FIELD_U16(a1, 5744) = 0;
  *(_BYTE *)(FIELD_U32(a1, 3588) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3592) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3596) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3612) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3616) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3620) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3624) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3628) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3632) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3636) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3640) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3644) + 64) &= ~1u;
  if ( FIELD_U32(a1, 5724) < 4u )
    v1 = FIELD_U32(a1, 5724);
  *(_DWORD *)(a1 + 4 * v1 + 3664) = 3;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA553C);
}
