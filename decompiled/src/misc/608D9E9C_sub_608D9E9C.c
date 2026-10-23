/* sub_608D9E9C
 * address: 0x608D9E9C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D9E9C(_DWORD *a1, nn__util__BinaryFileHeader *a2)
{
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  _BYTE *FirstBlock; // r0
  int v13; // r1
  bool v14; // zf

  v3 = *(unsigned __int8 *)a2;
  v4 = v3 == 66;
  if ( v3 == 66 )
    v4 = *((_BYTE *)a2 + 1) == 65;
  if ( !v4 )
    return a1;
  v5 = *((unsigned __int8 *)a2 + 2);
  v6 = v5 == 87;
  if ( v5 == 87 )
    v6 = *((_BYTE *)a2 + 3) == 83;
  if ( !v6 )
    return a1;
  v7 = *((unsigned __int8 *)a2 + 4);
  v8 = v7 == 68;
  if ( v7 == 68 )
    v8 = *((_BYTE *)a2 + 5) == 32;
  if ( !v8 )
    return a1;
  v9 = *((unsigned __int8 *)a2 + 6);
  v10 = v9 == 32;
  if ( v9 == 32 )
    v10 = *((_BYTE *)a2 + 7) == 32;
  if ( !v10 )
    return a1;
  if ( *((unsigned __int16 *)a2 + 6) != 65279 )
    return a1;
  if ( ((*((unsigned __int16 *)a2 + 5) << 16) | (*((unsigned __int8 *)a2 + 9) << 8) | *((unsigned __int8 *)a2 + 8)) != 0x10000 )
    return a1;
  FirstBlock = (_BYTE *)nn__util__BinaryFileHeader__GetFirstBlock(a2);
  if ( !FirstBlock || *FirstBlock != 73 )
    return a1;
  v13 = (unsigned __int8)FirstBlock[1];
  v14 = v13 == 78;
  if ( v13 == 78 )
    v14 = FirstBlock[2] == 70;
  if ( !v14 )
    return a1;
  if ( FirstBlock[3] == 79 )
    *a1 = FirstBlock + 16;
  return a1;
}
