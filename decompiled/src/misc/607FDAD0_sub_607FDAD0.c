/* sub_607FDAD0
 * address: 0x607FDAD0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FDAD0(int a1, int a2, unsigned __int8 *a3)
{
  int v6; // r1
  unsigned __int8 v7; // r0
  int v8; // r5
  unsigned int v9; // r0

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27DBC;
  v6 = a3[13];
  FIELD_U8(a1, 16) = v6;
  FIELD_U8(a1, 17) = a3[14];
  FIELD_U8(a1, 18) = a3[15];
  FIELD_U8(a1, 19) = a3[16];
  FIELD_U8(a1, 20) = a3[20];
  FIELD_U8(a1, 21) = a3[21];
  v7 = a3[25];
  v8 = 3;
  FIELD_U8(a1, 22) = v7;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 3;
  FIELD_U32(a1, 32) = sub_60727C80(a2, v6);
  v9 = FIELD_U8(a1, 20);
  if ( v9 >= 9 )
  {
    FIELD_U32(a1, 24) = 0;
  }
  else
  {
    FIELD_U32(a1, 24) = dword_60B0D9DC[v9];
    v8 = dword_60B0DA00[v9];
  }
  FIELD_U32(a1, 28) = v8;
  return a1;
}
