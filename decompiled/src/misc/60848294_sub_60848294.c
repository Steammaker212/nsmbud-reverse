/* sub_60848294
 * address: 0x60848294   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60848294(nn__util__BinaryFileHeader *a1, int a2, int a3)
{
  int v5; // r9
  int v6; // r8
  int v8; // [sp+4h] [bp-31Ch]
  int v9; // [sp+8h] [bp-318h]
  int v10; // [sp+Ch] [bp-314h]
  int v11; // [sp+10h] [bp-310h]
  int v12; // [sp+14h] [bp-30Ch]
  int v13; // [sp+18h] [bp-308h] BYREF
  int v14; // [sp+1Ch] [bp-304h]
  _DWORD v15[2]; // [sp+20h] [bp-300h] BYREF
  _BYTE v16[760]; // [sp+28h] [bp-2F8h] BYREF

  v15[0] = nn__util__BinaryFileHeader__GetFirstBlock_const(a1);
  v15[1] = a2;
  v13 = sub_6083E92C(a3);
  v14 = 4871;
  memset(v16, 0, 728);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E94C, &v13);
  v12 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E96C, &v13);
  v11 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E98C, &v13);
  v10 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E9AC, &v13);
  v9 = sub_60998C88(&v16[656]);
  v13 = sub_6083E934(a3);
  v14 = 4871;
  memset(v16, 0, 728);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E9CC, &v13);
  v8 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0E9EC, &v13);
  v5 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0EA0C, &v13);
  v6 = sub_60998C88(&v16[656]);
  ((void (__fastcall *)(_BYTE *, _DWORD *, void *, int *))loc_60849684)(v16, v15, &unk_60B0EA2C, &v13);
  return ((v9 + ((v10 + ((v11 + ((v12 + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + 782) & 0xFFFFFFF8)
       + sub_60998C88(&v16[656])
       + ((v6 + ((v5 + ((v8 + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8)
       + 775;
}
