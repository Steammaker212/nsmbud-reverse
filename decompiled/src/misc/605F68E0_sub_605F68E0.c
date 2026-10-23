/* sub_605F68E0
 * address: 0x605F68E0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F68E0(ModelWrapper **a1)
{
  char *v1; // r7
  unsigned int *v3; // r6
  signed int v4; // r1
  int result; // r0
  float v6; // s2
  unsigned int v7; // r1
  bool v8; // zf
  int MaskForMovementType; // r0
  int *v10; // r1
  _DWORD v11[9]; // [sp+Ch] [bp-24h] BYREF

  a1[1530] = (ModelWrapper *)9;
  v3 = (unsigned int *)(a1 + 1530);
  *((_BYTE *)a1 + 6440) = *((_BYTE *)a1 + 28);
  a1[125] = (ModelWrapper *)1159479296;
  a1[126] = (ModelWrapper *)1159479296;
  a1[127] = (ModelWrapper *)1115684864;
  a1[128] = (ModelWrapper *)1115684864;
  a1[1609] = (ModelWrapper *)1;
  v4 = sub_605F43EC((int)a1, 0);
  result = 2;
  if ( v4 == 1 )
  {
    v6 = (float)(*((float *)a1 + 28) + -3.0) + -16.0;
    *((float *)a1 + 27) = *((float *)a1 + 27) + 16.0;
    *((float *)a1 + 28) = v6;
    v7 = *v3;
    v8 = *v3 == 0;
    if ( *v3 )
    {
      v1 = (char *)(a1 + 1610);
      v8 = *((_BYTE *)a1 + 6440) == 0;
    }
    if ( !v8 )
    {
      memset(v11, 0, 12);
      MaskForMovementType = MovementHandler__getMaskForMovementType((int)(a1 + 1547), v7);
      sub_606B0CCC(a1 + 1547, (int *)a1 + 27, MaskForMovementType, *v1, v11, 0);
      MovementHandler__execute((MovementHandler *)(a1 + 1547));
      if ( a1[1559] == (ModelWrapper *)1 && a1[1564] != (ModelWrapper *)1 )
      {
        a1[27] = a1[1547];
        a1[28] = a1[1548];
        a1[41] = a1[1567];
      }
    }
    if ( a1[1590] )
      v10 = &dword_60CB2350;
    else
      v10 = &dword_60CB21E0;
    ((void (__fastcall *)(ModelWrapper **, int *))(*a1)[4].model)(a1, v10);
    StarCoinBase_updateModel(a1);
    return 1;
  }
  return result;
}
