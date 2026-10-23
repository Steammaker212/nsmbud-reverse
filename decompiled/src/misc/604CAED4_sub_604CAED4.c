/* sub_604CAED4
 * address: 0x604CAED4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CAED4(int a1)
{
  int v1; // r2
  unsigned int v2; // r10
  int v3; // r4
  int v4; // r7
  int v5; // r9
  unsigned int v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int v11; // [sp+10h] [bp-28h] BYREF

  v1 = 0;
  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  v3 = a1 + 52644 * v2;
  v4 = FIELD_U32(v3, 94176);
  if ( v4 == 256 )
    v4 = 13;
  do
  {
    v5 = v1;
    v6 = v1;
    if ( v1 != v4 )
    {
      if ( v1 == 12 )
        goto LABEL_13;
      v11 = v1;
      v7 = 0;
      if ( v6 < 0xD )
        v7 = v6;
      if ( (*(_BYTE *)(*(_DWORD *)(v3 + 4 * v7 + 93096) + 64) & 1) != 0 )
      {
        v8 = v3 + 89248;
        if ( v6 < 0xC )
          v8 = v3 + 89248 + v6;
        if ( FIELD_U8(v8, 45) )
        {
LABEL_13:
          v11 = v6;
          sub_60502B04(v3 + 93148, &v11, 1);
        }
      }
    }
    v1 = v5 + 1;
    if ( v5 > 12 )
      v1 = 13;
  }
  while ( v1 != 13 );
  FIELD_U32(v3, 94176) = 256;
  return StateMgr__changeState((StateMgr *)(a1 + 52644 * v2 + 89268), &stru_60CA3E38);
}
