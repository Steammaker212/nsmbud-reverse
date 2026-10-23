/* sub_606B2730
 * address: 0x606B2730   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B2730(int a1)
{
  int v2; // r1
  int v3; // r0
  unsigned int v4; // r3
  unsigned int v5; // r0
  int *v6; // r1

  v2 = FIELD_U32(a1, 72) - FIELD_U32(a1, 68);
  FIELD_U32(a1, 72) = v2;
  v3 = FIELD_U8(a1, 63);
  if ( v3 )
  {
    v4 = FIELD_U32(a1, 80);
    if ( (v2 >= v4 || FIELD_U8(a1, 60)) && (v2 <= v4 || FIELD_U8(a1, 60) != 1) )
      goto LABEL_21;
  }
  else if ( FIELD_U8(a1, 60) == 1 )
  {
    if ( v2 >= 0 )
      goto LABEL_21;
  }
  else if ( FIELD_U8(a1, 60) || v2 <= 0 )
  {
    goto LABEL_21;
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    FIELD_U8(a1, 55) = 1;
  if ( v3 )
    v5 = FIELD_U32(a1, 80);
  else
    v5 = 0x80000000;
  FIELD_U32(a1, 72) = v5;
  if ( FIELD_U32(a1, 48) )
    v6 = &dword_60CBA34C;
  else
    v6 = &dword_60CBA2EC;
  StateMgr__changeState((StateMgr *)(a1 + 196), (StateBase *)v6);
LABEL_21:
  JUMPOUT(0x606B2C4C);
}
