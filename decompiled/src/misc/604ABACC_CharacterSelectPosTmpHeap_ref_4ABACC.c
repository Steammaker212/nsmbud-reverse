/* CharacterSelectPosTmpHeap_ref_4ABACC
 * address: 0x604ABACC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CharacterSelectPosTmpHeap_ref_4ABACC(int a1)
{
  int v2; // r9
  int v3; // r6
  int v4; // r5
  int v5; // r4
  int v6; // r7
  int v7; // r1
  _DWORD v9[11]; // [sp+14h] [bp-2Ch] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "CharacterSelectPosTmpHeap";
  v2 = sub_608F8808(0x1000000, v9, 0, 4, -1, 0);
  v3 = 0;
  v4 = a1 + 113184;
  v5 = *(_DWORD *)(FIELD_U32(dword_60C9C0FC, 724) + 52);
  do
  {
    v6 = sub_60834674(v3);
    if ( (v6 & 0xFF000000) != 0x6000000 )
    {
      sub_608346A4(v6);
      sub_60402714(v4, 8, 0, 0, 0, v6);
    }
    if ( v3 + 1 >= v5 )
      break;
    v7 = v3 + 7;
    v4 += 2988;
    ++v3;
  }
  while ( v7 < 61 );
  return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 16))(v2);
}
