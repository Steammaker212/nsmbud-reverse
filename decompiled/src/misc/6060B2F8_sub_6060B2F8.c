/* sub_6060B2F8
 * address: 0x6060B2F8   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060B2F8(int a1, __int64 *a2)
{
  _DWORD *v4; // r4
  __int64 v6; // [sp+0h] [bp-68h] BYREF
  __int64 v7; // [sp+8h] [bp-60h]
  __int64 v8; // [sp+10h] [bp-58h]
  __int64 v9; // [sp+18h] [bp-50h]
  __int64 v10; // [sp+20h] [bp-48h]
  __int64 v11; // [sp+28h] [bp-40h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6 = *a2;
  LODWORD(v7) = *((_DWORD *)a2 + 2);
  *((float *)&v7 + 1) = *((float *)a2 + 3)
                      + (float)((float)((float)(*((float *)&v6 + 1) * 336.0) + (float)(*(float *)&v6 * 0.0))
                              + (float)(*(float *)&v7 * 0.0));
  v8 = a2[2];
  LODWORD(v9) = *((_DWORD *)a2 + 6);
  *((float *)&v9 + 1) = *((float *)a2 + 7)
                      + (float)((float)((float)(*((float *)&v8 + 1) * 336.0) + (float)(*(float *)&v8 * 0.0))
                              + (float)(*(float *)&v9 * 0.0));
  v10 = a2[4];
  LODWORD(v11) = *((_DWORD *)a2 + 10);
  *((float *)&v11 + 1) = *((float *)a2 + 11)
                       + (float)((float)((float)(*((float *)&v10 + 1) * 336.0) + (float)(*(float *)&v10 * 0.0))
                               + (float)(*(float *)&v11 * 0.0));
  v4 = (_DWORD *)(a1 + 8476);
  (*(void (__fastcall **)(_DWORD, __int64 *))(**(_DWORD **)(a1 + 8476) + 60))(FIELD_U32(a1, 8476), &v6);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 56))(*v4);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6 = *a2;
  LODWORD(v7) = *((_DWORD *)a2 + 2);
  *((float *)&v7 + 1) = *((float *)a2 + 3)
                      + (float)((float)((float)(*((float *)&v6 + 1) * 328.0) + (float)(*(float *)&v6 * 0.0))
                              + (float)(*(float *)&v7 * 0.0));
  v8 = a2[2];
  LODWORD(v9) = *((_DWORD *)a2 + 6);
  *((float *)&v9 + 1) = *((float *)a2 + 7)
                      + (float)((float)((float)(*((float *)&v8 + 1) * 328.0) + (float)(*(float *)&v8 * 0.0))
                              + (float)(*(float *)&v9 * 0.0));
  v10 = a2[4];
  LODWORD(v11) = *((_DWORD *)a2 + 10);
  *((float *)&v11 + 1) = *((float *)a2 + 11)
                       + (float)((float)((float)(*((float *)&v10 + 1) * 328.0) + (float)(*(float *)&v10 * 0.0))
                               + (float)(*(float *)&v11 * 0.0));
  (*(void (__fastcall **)(_DWORD, __int64 *))(**(_DWORD **)(a1 + 8480) + 60))(FIELD_U32(a1, 8480), &v6);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8480) + 56))(FIELD_U32(a1, 8480));
}
