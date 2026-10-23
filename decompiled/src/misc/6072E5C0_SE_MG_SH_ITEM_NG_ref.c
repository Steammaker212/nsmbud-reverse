/* SE_MG_SH_ITEM_NG_ref
 * address: 0x6072E5C0   size: 1384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_SH_ITEM_NG_ref(int a1)
{
  int v2; // r0
  char *v3; // r5
  int result; // r0
  _BYTE *v5; // r4
  char *v6; // r7
  unsigned int v7; // r0
  _WORD *v8; // r6
  int v9; // r7
  unsigned int v10; // r1
  int (__fastcall ***v11)(_DWORD, int *); // r4
  char v12; // r12
  int v13; // r9
  int v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  int (__fastcall ***v17)(_DWORD, int *); // r6
  char v18; // r12
  unsigned int v19; // r0
  _WORD *v20; // r6
  unsigned int v21; // r2
  int v22; // r7
  unsigned int v23; // r1
  int v24; // r0
  int (__fastcall ***v25)(_DWORD, int *); // r9
  char v26; // r12
  int (__fastcall ***v27)(_DWORD, int *); // r4
  char v28; // r12
  int v29; // r7
  char v30; // r1
  char v31; // r0

  v3 = (char *)(a1 + 6102);
  v2 = FIELD_U8(a1, 6102);
  if ( v2 )
  {
    result = v2 - 1;
    *v3 = result;
    v5 = (_BYTE *)(a1 + 6103);
    FIELD_U8(a1, 6103) = (unsigned __int8)(FIELD_U8(a1, 6103) + 1) % 0x30u;
    if ( (_BYTE)result )
      return result;
  }
  else
  {
    v5 = (_BYTE *)(a1 + 6103);
    FIELD_U8(a1, 6103) = (unsigned __int8)(FIELD_U8(a1, 6103) + 1) % 0x30u;
  }
  v6 = (char *)(a1 + 6100);
  result = FIELD_U8(a1, 6100);
  switch ( FIELD_U8(a1, 6100) )
  {
    case 0:
      v8 = (_WORD *)(a1 + 6110);
      v7 = FIELD_U16(a1, 6110);
      if ( v7 >= FIELD_U16(a1, 6104) )
      {
        *v8 = 0;
        *v3 = 8;
        result = 1;
        goto LABEL_60;
      }
      v9 = 0;
      if ( v7 >= 0x1E )
        v7 = 0;
      v10 = *(_DWORD *)(a1 + 4 * v7 + 6116);
      if ( v10 )
      {
        v11 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v10);
        if ( ((unsigned int)&dword_60CBD948 & ~(1618142960 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
        {
          dword_60CBD944 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBD948);
        }
        if ( v11 )
        {
          v9 = (**v11)(v11, &dword_60CBD944);
          if ( v9 )
            v9 = (int)v11;
        }
      }
      StateMgr__changeState((StateMgr *)(v9 + 6084), (StateBase *)&dword_60CBDA04);
      ++*v8;
      result = 4;
      goto LABEL_50;
    case 1:
      if ( FIELD_U16(a1, 6104) )
      {
        v13 = 0;
        do
        {
          v14 = 0;
          if ( (unsigned int)v13 < 0x1E )
            v14 = v13;
          v15 = *(_DWORD *)(a1 + 4 * v14 + 6116);
          v16 = 0;
          if ( v15 )
          {
            v17 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v15);
            if ( ((unsigned int)&dword_60CBD948 & ~(1618143284 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
            {
              dword_60CBD944 = (int)&off_60BC00E0;
              _cxa_guard_release(&dword_60CBD948);
            }
            v16 = 0;
            if ( v17 )
            {
              v16 = (**v17)(v17, &dword_60CBD944);
              if ( v16 )
                v16 = (int)v17;
            }
          }
          StateMgr__changeState((StateMgr *)(v16 + 6084), (StateBase *)&dword_60CBDA24);
          ++v13;
        }
        while ( v13 < FIELD_U16(a1, 6104) );
        result = (unsigned __int8)*v6 + 1;
      }
      else
      {
        result = 2;
      }
      *v3 = 120;
      goto LABEL_60;
    case 2:
      v20 = (_WORD *)(a1 + 6110);
      v19 = FIELD_U16(a1, 6110);
      v21 = FIELD_U16(a1, 6106);
      if ( FIELD_U16(a1, 6104) < v21 )
        v21 = FIELD_U16(a1, 6104);
      if ( v19 >= v21 )
      {
        result = 3;
LABEL_60:
        *v6 = result;
      }
      else
      {
        v22 = 0;
        if ( v19 >= 0x1E )
          v19 = 0;
        v23 = *(_DWORD *)(a1 + 4 * v19 + 6236);
        v24 = 0;
        if ( v23 )
        {
          v25 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v23);
          if ( ((unsigned int)&dword_60CBD948 & ~(1618143528 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
          {
            dword_60CBD944 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60CBD948);
          }
          v24 = 0;
          if ( v25 )
          {
            v24 = (**v25)(v25, &dword_60CBD944);
            if ( v24 )
              v24 = (int)v25;
          }
        }
        FIELD_U8(v24, 6120) = *v5;
        StateMgr__changeState((StateMgr *)(v24 + 6084), (StateBase *)&dword_60CBDA44);
        if ( (unsigned __int16)*v20 < 0x1Eu )
          v22 = (unsigned __int16)*v20;
        v27 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *(_DWORD *)(a1 + 4 * v22 + 6116));
        if ( ((unsigned int)&dword_60CBD948 & ~(1618143732 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
        {
          dword_60CBD944 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBD948);
        }
        v29 = (int)v27 + 6105;
        if ( !(**v27)(v27, &dword_60CBD944) )
          v29 = 6105;
        *(_BYTE *)v29 = 0;
        ++*v20;
        result = 8;
LABEL_50:
        *v3 = result;
      }
      break;
    case 3:
      if ( FIELD_U16(a1, 6104) <= (unsigned int)FIELD_U16(a1, 6106) )
      {
        sub_60807EF0(SoundSystem_instance, "SE_MG_SH_ITEM_NG", 0, 1);
        v30 = 50;
        v31 = *v6 + 1;
      }
      else
      {
        v30 = 30;
        v31 = 4;
      }
      *v3 = v30;
      *v6 = v31;
      goto LABEL_57;
    case 4:
LABEL_57:
      result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDAA8);
      break;
    default:
      return result;
  }
  return result;
}
