/* sub_6099AA58
 * address: 0x6099AA58   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099AA58(int a1, int *a2, int a3, int a4)
{
  nn__util__BinaryFileHeader *v8; // r0
  nn__util__BinaryFileHeader *v9; // r6
  int v10; // r4
  nn__util__BinaryBlockHeader *v11; // r0
  int v12; // r6
  _DWORD v14[22]; // [sp+8h] [bp-58h] BYREF

  v8 = sub_60998E80(*(nn__util__BinaryFileHeader **)(a1 + 4));
  v9 = v8;
  if ( a3 )
  {
    *((_DWORD *)v8 + 18) = a3;
    v10 = a4 - (_DWORD)v8 + *((_DWORD *)v8 + 12) + 16;
  }
  else
  {
    v10 = 0;
    memset(&v14[1], 0, 28);
    v14[0] = 33;
    v11 = *((nn__util__BinaryBlockHeader **)v8 + 12);
    v14[2] = (char *)v11 + 16;
    v14[1] = nn__util__BinaryBlockHeader__GetBlockSize_const(v11) - 16;
    sub_60836538(*((_DWORD *)v9 + 16), a2, v14);
    *((_DWORD *)v9 + 18) = *((_DWORD *)v9 + 16);
  }
  *((_DWORD *)v9 + 20) = v10;
  v12 = **((_DWORD **)v9 + 10);
  FIELD_U32(a1, 32) = v12;
  sub_6083D24C(
    FIELD_U32(v12, 128),
    a2,
    (unsigned __int8 *)(v12 + 16),
    *(_DWORD **)(FIELD_U32(v12, 104) + 40),
    *(_DWORD *)(FIELD_U32(v12, 104) + 48)
  - (*(_DWORD *)(FIELD_U32(v12, 104) + 16)
   + 16)
  + **(_DWORD **)(v12 + 112),
    FIELD_U32(v12, 80));
  memset(v14, 0, 64);
  sub_60998F30((int)v14);
  LOBYTE(v14[0]) = FIELD_U8(v12, 92);
  v14[2] = FIELD_U32(v12, 88);
  v14[1] = FIELD_U32(v12, 28);
  v14[12] = FIELD_U32(v12, 128);
  v14[9] = FIELD_U32(v12, 48);
  HIWORD(v14[4]) = FIELD_U16(v12, 22);
  return sub_6083D338(FIELD_U32(v12, 136), (int)a2, (unsigned __int8 *)v14);
}
