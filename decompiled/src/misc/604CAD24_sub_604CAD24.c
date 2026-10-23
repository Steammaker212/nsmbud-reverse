/* sub_604CAD24
 * address: 0x604CAD24   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CAD24(int a1)
{
  unsigned int v2; // r9
  unsigned int v3; // r10
  int v4; // r4
  int v5; // r7
  int v6; // r11
  unsigned int v7; // r2
  unsigned int v8; // r2
  int v10; // [sp+8h] [bp-30h]
  unsigned int v11; // [sp+10h] [bp-28h] BYREF

  v2 = 0;
  sub_60473DE4((_DWORD *)(a1 + 9420), 0, &dword_60CA4D68, 0);
  v3 = FIELD_U32(a1, 615700);
  v10 = a1;
  if ( v3 >= 0xA )
    v3 = 0;
  v4 = a1 + 52644 * v3;
  v5 = FIELD_U32(v4, 94176);
  if ( v5 == 256 )
    v5 = 13;
  do
  {
    v6 = v2;
    if ( v2 != v5 )
    {
      if ( v2 == 12 )
        goto LABEL_13;
      v11 = v2;
      v7 = 0;
      if ( v2 < 0xD )
        v7 = v2;
      if ( (*(_BYTE *)(*(_DWORD *)(v4 + 4 * v7 + 93096) + 64) & 1) != 0 )
      {
        v8 = v4 + 89248;
        if ( v2 < 0xC )
          v8 = v4 + 89248 + v2;
        if ( FIELD_U8(v8, 45) )
        {
LABEL_13:
          v11 = v2;
          sub_60502B04(v4 + 93148, &v11, 1);
        }
      }
    }
    ++v2;
    if ( v6 > 12 )
      v2 = 13;
  }
  while ( v2 != 13 );
  FIELD_U32(v4, 94176) = 256;
  return StateMgr__changeState((StateMgr *)(v10 + 52644 * v3 + 89268), &stru_60CA3E38);
}
