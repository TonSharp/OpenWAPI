<div><img src="Images/Banner.png?raw=true"</img></div>

# Содержание

 1. [О фреймворке](#open-wapi)
 2. [Установка для Visual Studio](#setup-guide-for-visual-studio)
 3. [Установка для VS Code](#setup-guide-for-vs-code)
 4. [Документация](#documentation)
 5. [Обратная связь](#feedback)

# Open WAPI
WinAPI To Its Slightest- это фреймворк для Win32API с открытым исходным кодом, который призван упростить работу с API, предоставляемым Windows, для разработки классических приложений. WAPITIS позволяет с легкостью создавать окна и элементы интерфейса, настраивать и обрабатывать их. 
В планах развития добавить поддержку OpenGL для простого написания курсовой работы.

# Setup guide for Visual Studio
- __Откройте Visual studio, создайте новый проект с типом "Классическое приложение Windows".__
<div align=center>
 <img src="Images/1.png?raw=true"</img>
</div>
<hr>

- __В проекте выделите следующие папки и удалите их (клавиша `Delete`).__
<div align=center>
 <img src="Images/2.png?raw=true"</img>
</div>
<hr>

- __Нажмите ПКМ по пиктограмме решения и в контекстном меню выберите пункт _открыть папку в проводнике_.__
<div align=center>
 <img src="Images/3.png?raw=true"</img>
</div>
<hr>

- __Выделите все имеющиеся файлы и удалить их. Не закрывайте папку.__
<div align=center>
 <img src="Images/4.png?raw=true"</img>
</div>
<hr>

- __Перейдите на вкладку [`Releases`](https://github.com/TonSharp/OpenWAPI/releases) в репозитории.__
<div align=center>
 <img src="Images/5.png?raw=true"</img>
</div>
<hr>

- __В самом новом релизе скачайте архив _Framework.zip___
<div align=center>
 <img src="Images/6.png?raw=true"</img>
</div>
<hr>

- __Распакуйте папку из архива в то место, откуда вы удалили все файлы.__
<div align=center>
 <img src="Images/7.png?raw=true"</img>
</div>
<hr>

- __Откройте распакованную папку _Framework_.__
<div align=center>
 <img src="Images/8.png?raw=true"</img>
</div>
<hr>

- __Выделите файлы `FrameworkEntryPoint.cpp` и `main.hpp` и перенесите их на пиктограмму решения в Visual Studio.__
<div align=center>
 <img src="Images/9.png?raw=true"</img>
</div>
<hr>

- __Если вы все сделали правильно, то получите следующий результат в обозревателе решения:__
<div align=center>
 <img src="Images/10.png?raw=true"</img>
</div>
<hr>

- __Пишите свой код в файле `main.hpp`.__

# Setup guide for VS Code
Для работы с WAPITIS непосредственно в VS Code вам понадобится установить расширение "C/C++" из каталога расширений и установить компилятор GCC и дебаггер GDB из MinGW по этой инструкции: https://code.visualstudio.com/docs/cpp/config-mingw.
**ВАЖНО**: Не пропустите ЧЕТВЕРТЫЙ пункт из руководства выше!

- __Запустите Visual Studio Code и нажмите Open Folder__
<div align=center>
 <img src="Images/VS1.png?raw=true"</img>
</div>
<hr>

- __Выберите / создайте директорию для хранения проекта.__
<div align=center>
 <img src="Images/VS2.png?raw=true"</img>
</div>
<hr>

- __Перейдите на вкладку [`Releases`](https://github.com/TonSharp/OpenWAPI/releases) в репозитории.__
<div align=center>
 <img src="Images/5.png?raw=true"</img>
</div>
<hr>

- __В самом новом релизе скачайте два архива: _Framework.zip_ и _vscode.zip_.__
<div align=center>
 <img src="Images/VS3.png?raw=true"</img>
</div>
<hr>

- __Распакуйте оба архива и перенесите содержимое в рабочую область VS Code.__
<div align=center>
 <img src="Images/VS4.png?raw=true"</img>
</div>
<hr>

- __В итоге проект должен выглядеть так:__
<div align=center>
 <img src="Images/VS5.png?raw=true"</img>
</div>
<hr>

Откройте файл main.hpp, где вы будете писать свой код. Компиляция программы является _Default Build Task (Ctrl+Shift+B)_, а запуск и отладка программы / запуск без отладки – _F5 / Ctrl+F5_ соответственно.

# Documentation
Документацию о всех поддерживаемых функциях фреймворка ищите на [Wiki](https://github.com/TonSharp/OpenWAPI/wiki/Overview) в GitHub.

# Feedback
Любые пожелания, просьбы и заметки о найденных багах оставлять в разделе [Issues](https://github.com/TonSharp/OpenWAPI/issues) на GitHub
