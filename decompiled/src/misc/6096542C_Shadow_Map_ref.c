/* Shadow_Map_ref
 * address: 0x6096542C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Shadow_Map_ref(int a1)
{
  unsigned int *v1; // r2
  unsigned int v2; // r1
  unsigned int v3; // r3
  unsigned int v4; // r3
  unsigned int v5; // r3
  unsigned int *v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r1
  unsigned int v10; // r1
  unsigned int *v11; // r2
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r1

  v1 = (unsigned int *)(a1 + 664);
  FIELD_U8(a1, 655) = 5;
  FIELD_U8(a1, 656) = 5;
  FIELD_U8(a1, 657) = 7;
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 | 2, v1) );
  FIELD_U32(a1, 624) = 1065353216;
  FIELD_U32(a1, 628) = 1065353216;
  FIELD_U32(a1, 632) = 1065353216;
  FIELD_U32(a1, 636) = 1065353216;
  do
    v3 = __ldrex(v1);
  while ( __strex(v3 | 0x20, v1) );
  FIELD_U8(a1, 668) |= 4u;
  do
    v4 = __ldrex(v1);
  while ( __strex(v4 | 0x10, v1) );
  FIELD_U8(a1, 659) = 4;
  FIELD_U8(a1, 668) |= 4u;
  do
    v5 = __ldrex(v1);
  while ( __strex(v5 | 0x10, v1) );
  FIELD_U8(a1, 1359) = 5;
  FIELD_U8(a1, 1360) = 5;
  FIELD_U8(a1, 1361) = 7;
  v6 = (unsigned int *)(a1 + 1368);
  do
    v7 = __ldrex(v6);
  while ( __strex(v7 | 2, v6) );
  FIELD_U32(a1, 1328) = 1065353216;
  FIELD_U32(a1, 1332) = 1065353216;
  FIELD_U32(a1, 1336) = 1065353216;
  FIELD_U32(a1, 1340) = 1065353216;
  do
    v8 = __ldrex(v6);
  while ( __strex(v8 | 0x20, v6) );
  FIELD_U8(a1, 1372) |= 4u;
  do
    v9 = __ldrex(v6);
  while ( __strex(v9 | 0x10, v6) );
  FIELD_U8(a1, 1363) = 4;
  FIELD_U8(a1, 1372) |= 4u;
  do
    v10 = __ldrex(v6);
  while ( __strex(v10 | 0x10, v6) );
  FIELD_U8(a1, 1711) = 5;
  FIELD_U8(a1, 1712) = 5;
  FIELD_U8(a1, 1713) = 7;
  v11 = (unsigned int *)(a1 + 1720);
  do
    v12 = __ldrex(v11);
  while ( __strex(v12 | 2, v11) );
  FIELD_U32(a1, 1680) = 1065353216;
  FIELD_U32(a1, 1684) = 1065353216;
  FIELD_U32(a1, 1688) = 1065353216;
  FIELD_U32(a1, 1692) = 1065353216;
  do
    v13 = __ldrex(v11);
  while ( __strex(v13 | 0x20, v11) );
  FIELD_U8(a1, 1724) |= 4u;
  do
    v14 = __ldrex(v11);
  while ( __strex(v14 | 0x10, v11) );
  FIELD_U8(a1, 1715) = 4;
  FIELD_U8(a1, 1724) |= 4u;
  do
    v15 = __ldrex(v11);
  while ( __strex(v15 | 0x10, v11) );
  FIELD_U32(a1, 320) = a1 + 336;
  nullsub_123();
}
