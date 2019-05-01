# Computer Programming (100% Get-Pro!!!)
 ## Abstract
  	
เกมเป็นลักษณะของกิจกรรมของมนุษย์เพื่อประโยชน์อย่างใดอย่างหนึ่ง เช่น เพื่อความสนุกสนานบันเทิง เพื่อฝึกทักษะ เพื่อการเรียนรู้ 
และประโยชน์ทางการศึกษาได้ ซึ่งในปัจจุบันเกมได้มีพัฒนาการอย่างมากมายเเละหนึ่งในนั้นได้มีเเนวเกมชนิดหนึ่งที่่ผู้พัฒนานั้นให้ความสนใจเป็นพิเศษ 
คือ เกมกระดาน หรือ บอร์ดเกม โดยบอร์ดเกมนั้นได้ให้ประโยชน์เเก่ผู้เล่นอย่างคาดไม่ถึง เช่น 
- เพิ่มประสิทธิภาพการทำงานของสมอง
- ได้ฝึกตั้งเป้าหมายเพื่อนำไปสู่ชัยชนะ 
- และฝึกความอดทน 
- สร้างความสัมพันธ์ที่ใกล้ชิดและเหนียวแน่นระหว่างผู้เล่น 
- เสริมสร้างความคิดสร้างสรรค์และความมั่นใจในตัวเอง 
- สร้างเสียงหัวเราะให้กับผู้เล่น
	
โดยเหตุนี้ผู้พัฒนาจึงได้นำ`dice game`(เกมลูกเต๋า) ซึ่งเป็นบอร์ดเกมชนิดหนึ่งที่ใช้ลูกเต่าเป็นส่วนประกอบของเกม ทำให้เกิดสถานะการณ์ต่างๆ
ที่คาดไม่ถึงให้เเก่ผู้เล่น พัฒนาจากบอร์ดเกม เป็นแพลตฟอร์มคอมพิวเตอร์ด้วยภาษาซี ภายในเกมผู้เล่นทั้ง 1-4 คนได้ได้รับบทเป็นตัวละครที่สุ่มได้ตอนเริ่ม 
เเละต้องทำเงื่อนไขของเกมให้สำเร็จก่อนผู้เล่นคนอื่นๆ เพื่อที่จะได้เป็นผู้ชนะของเกมนั้นๆ โดยผู้เล่นจะต้องเผชิญอุปสรรคต่างๆทั้งเหตุการณ์สุ่มของเกมเเละ
การต่อสู้กับผู้เล่นอื่นเเละผลลัพธ์ของเกมที่สามารถพลิกเเพลงได้เสมอ พร้อมสร้างเสียงหัวเราะให้กับผู้เล่นทุกคนในเกม
	
	
## How to play
1. ในรอบของผู้เล่นเเต่ละคน  ให้ทำการ คลิกเมาส์ ซ้าย เพื่อสุ่มเเต้มลูกเต๋า
- เมื่อ ทอยลูกเต๋าเเล้ว  ให้ตัวแปร position เพิ่มขึ้นตามเเต้มที่ทอยได้
- เช็ค ตัวแปร position ว่าตรงกับบล็อคอีเว้นท์ต่างๆหรื่อไม่
    โดยอีเว้นท์บล็อคจะมีดังนี้
- สีเหลือง สุ่มรับเเต้มดาวเพิ่ม
- สีน้ำเงิน สุ่มลดเเต้มดาวที่มี
- สีเขียว สุ่มอีเว้นท์พิเศษ เช่น เพิ่มเลือด , สุ่มทำดาเมจ
- สีเเดง สุ่มเเต้มลูกเต๋าเพื่อสู้กับมอนสเตอร์ ผู้เล่นที่กำจัดมันได้จะได้รับ เเต้มดาว
2. หาก พลังชีวิต ของผู้เล่นหมดจะติดสถานะ ล้ม (down) เเละเสียเเต้มดาวทั้งหมด
ผู้เล่นจะต้องทำการทอยลูกเต๋า (คลิกขวา) ให้เเต้มสูงกว่า 5 หากทำสำเร็จ  สามารถ ทอยเต๋าเพื่อเดินได้ตามปกติในตาถัดไป
หากไม่สำเร็จต้องทอยเต๋าใหม่ โดยจะต้องให้เเต้มได้มากกว่า 4 (หากไม่สำเร็จจะต้องทอยเรื่อยๆจนดกว่าจะได้แต้มสูงกว่าที่กำหนด 
โดยเเต่ละรอบ จำนวนเเต้มที่กำหนดจะลดลงทีละ 1)

3. ผู้เล่นที่สะสมเเต้มดาวได้ถึง 200 หรือ กำจัดมอนสเตอร์ครบ 5 ตัวก่อน เป็นผู้ชนะ
  
  
## Tools and library
- C language
- [Raylib](https://www.raylib.com/)

## Reference
- [100% Orange Juice](https://store.steampowered.com/app/282800/100_Orange_Juice/?l=thai)

## Members
- 61070079    นายธนา สามารถ         - [ThanaIT079](https://github.com/ThanaIT079)
- 61070082    นายธเนศวร พิมพ์พา     - [Thanesuan07](https://github.com/thanesuan07)
- 61070082    นายปรมินทร์ สุนทรเสณี     - [Paramin11798](https://github.com/Paramin11798)
- 61070116    นายประกาศิต บริบูรณ์   - [Pragasit](https://github.com/pragasit)
