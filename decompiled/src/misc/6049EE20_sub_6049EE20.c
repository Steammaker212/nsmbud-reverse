/* sub_6049EE20
 * address: 0x6049EE20   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049EE20(int a1)
{
  int v2; // r6
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r5
  int v10; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  int v20; // r0

  v2 = dword_60C99DEC;
  FIELD_U8(dword_60C99DEC, 522) = 1;
  v3 = FIELD_U32(a1, 22332);
  v4 = v3 == 2;
  if ( v3 != 2 )
    v4 = v3 == FIELD_U32(a1, 22360);
  if ( !v4 )
    goto LABEL_8;
  v5 = FIELD_U32(a1, 22336);
  v6 = v5 == 2;
  if ( v5 != 2 )
    v6 = v5 == FIELD_U32(a1, 22364);
  if ( !v6 )
    goto LABEL_8;
  v12 = FIELD_U32(a1, 22340);
  v13 = v12 == 2;
  if ( v12 != 2 )
    v13 = v12 == FIELD_U32(a1, 22368);
  if ( !v13 )
    goto LABEL_8;
  v14 = FIELD_U32(a1, 22344);
  v15 = v14 == 2;
  if ( v14 != 2 )
    v15 = v14 == FIELD_U32(a1, 22372);
  if ( !v15 )
    goto LABEL_8;
  v16 = FIELD_U32(a1, 22348);
  v17 = v16 == 2;
  if ( v16 != 2 )
    v17 = v16 == FIELD_U32(a1, 22376);
  if ( !v17 )
    goto LABEL_8;
  v18 = FIELD_U32(a1, 22352);
  v19 = v18 == 2;
  if ( v18 != 2 )
    v19 = v18 == FIELD_U32(a1, 22380);
  if ( !v19 || (v20 = FIELD_U32(a1, 22356), v20 != 2) && v20 != FIELD_U32(a1, 22384) )
LABEL_8:
    sub_6082B658(dword_60CC6E04);
  if ( FIELD_S32(a1, 22496) >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = 0;
      if ( v7 < 7 )
        v8 = v7;
      v10 = a1 + 4 * v8;
      if ( v7 < 6 )
        v9 = v7;
      ++v7;
      *(_DWORD *)(v2 + 72 * v9 + 56) = FIELD_U32(v10, 22332);
    }
    while ( (signed int)v7 < FIELD_U32(a1, 22496) );
  }
  FIELD_U8(a1, 22500) = 0;
  FIELD_U8(a1, 22503) = 0;
  return 22503;
}
